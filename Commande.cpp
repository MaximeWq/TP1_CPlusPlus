#include "Commande.h"


Commande::Commande(int id, Client client)
    :_id(id), _client(client)
{
}
int Commande::getId() const{
    return _id;
}
const Client& Commande::getClient() const{
    return _client;
}
void Commande::addProduit(Produit produit){
    _liste_produit.push_back(produit);
}
void Commande::changeStatus(Status status, int it){
    _status_produit.at(it) = status;
}
int Commande::getNombreDeProduit()  const{
    return _liste_produit.size();
}