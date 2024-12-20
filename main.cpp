#include <iostream>
#include <grafo.cpp>

int main() {
    Grafo<std::string> grafo;

    grafo.aggiungiNodo("Marte");
    grafo.aggiungiNodo("Venere");
    grafo.aggiungiNodo("Giove");
    grafo.aggiungiNodo("Terra");
    grafo.aggiungiNodo("Saturno");

    grafo.aggiungiArco("Marte", "Terra", 100);
    grafo.aggiungiArco("Terra", "Giove", 200);
    grafo.aggiungiArco("Giove", "Saturno", 150);
    grafo.aggiungiArco("Saturno", "Marte", 120);
    grafo.aggiungiArco("Venere", "Terra", 50);
    grafo.aggiungiArco("Terra", "Marte", 90);

    grafo.visualizzaGrafo();

    grafo.nodiAdiacenti("Terra");

    if (grafo.esisteArco("Terra", "Giove")) {
        std::cout << "Esiste un arco da Terra a Giove." << std::endl;
    }

    grafo.rimuoviArco("Terra", "Giove");
    grafo.visualizzaGrafo();

    grafo.rimuoviNodo("Venere");
    grafo.visualizzaGrafo();

    return 0;
}
