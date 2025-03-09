// exercise2.cpp (Andrea Rueda)
// based on:
// main.cc (Andrew Gilpin, agg1@cec.wustl.edu)

// This file contains a modification of the example program used in the 
// gdb debugging tutorial. The tutorial can be found on the web at
// http://students.cec.wustl.edu/~agg1/tutorial/
/******************************************************************************************
* Comnetador: Juan Pabon Vargas
* En este programa, se demuestra operaciones con listas enlazadas incluyendo:
* eliminar, insertar e imprimir la lista en cada paso
******************************************************************************************/

#include <iostream>

using namespace std;

int numb_inst = 0;

//Clase que representa un nodo en la lista enlazada
template <class T>
class Node {
public:
  //Constructor: se inicializa con un valor y el siguiente nodo
  Node (const T &value, Node<T> *next = 0) {
    value_ = value;
    next_ = next;
    cout << "Creating Node, "
         << ++numb_inst
         << " are in existence right now" << endl;
  }
  //Destruye el nodo y actualiza el contador de instancias
  ~Node () {
    cout << "Destroying Node, "
         << --numb_inst
         << " are in existence right now" << endl;
    next_ = 0;
  }
  //Obtiene el siguiente nodo
  Node<T>* next () const { 
    return next_; 
  }
  //Establece el siguiente nodo
  void next (Node<T> *new_next) { 
    next_ = new_next; 
  };
  //Obtener el valor del nodo
  const T& value () const { 
    return value_; 
  }
  //Establecer el valor del nodo
  void value (const T &value) { 
    value_ = value; 
  }

private:
  Node (); //constructor sin parametros
  T value_; //valor del nodo
  Node<T> *next_; //puntero al siguiente nodo
};
//Clase que representa una lista enlazada  
template <class T>
class LinkedList {
public:
  //Constructor: lista vacia
  LinkedList () : head_(0) {};
  //Elimina todos los nodos en la lista
  ~LinkedList () { delete_nodes (); };

  //Inserta un nuevo elemento al inicio de la lista
  // returns 0 on success, -1 on failure
  int insert (const T &new_item) {
    return ((head_ = new Node<T>(new_item, head_)) != 0) ? 0 : -1;
  }

  //Elimina la primera ocurrencia de un elemento
  // returns 0 on success, -1 on failure
  int remove (const T &item_to_remove) {
    Node<T> *marker = head_;
    Node<T> *temp = 0;  // temp points to one behind as we iterate

    while (marker != 0) {
      if (marker->value() == item_to_remove) {
        if (temp == 0) { // marker is the first element in the list
          if (marker->next() == 0) {
            head_ = 0;
            delete marker; // marker is the only element in the list
            marker = 0;
          } else {
            head_ = new Node<T>(marker->value(), marker->next());
            delete marker;
            marker = 0;
          }
          return 0;
        } else {
          temp->next (marker->next());
          delete temp;
          temp = 0;
          return 0;
        }
      }
      marker = 0;  // reset the marker
      temp = marker;
      marker = marker->next();
    }

    return -1;	// failure
  }
  //Imprime toda la lista enlazada
  void print (void) {
    Node<T> *marker = head_;
    while (marker != 0) {
      cout << marker->value() << endl;
      marker = marker->next();
    }
  }

private:
//Elimina todos los nodos
  void delete_nodes (void) {
    Node<T> *marker = head_;
    while (marker != 0) {
      Node<T> *temp = marker;
      delete marker;
      marker = temp->next();
    }
  }
        
  Node<T> *head_;
};

int main (int argc, char **argv) {
  LinkedList<int> *list = new LinkedList<int> ();
  //Se insertan los elementos a la lista
  list->insert (1);
  list->insert (2);
  list->insert (3);
  list->insert (4);
  //Imprime la lista
  cout << "The fully created list is:" << endl;
  list->print ();
  //Elimina elementos de la lista e imprime la lista despues de los cambios
  cout << endl << "Now removing elements:" << endl;
  list->remove (4);
  list->print ();
  cout << endl;

  list->remove (1);
  list->print ();
  cout << endl;

  list->remove (2);
  list->print ();
  cout << endl;

  list->remove (3);
  list->print ();
  //libera memoria
  delete list;

  return 0;
}
