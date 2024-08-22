class Rectangle
{
public :
    Rectangle ();
    ~Rectangle ();
    int perimetre () {return (largeur*longueur)*2;}
    int surface () {return (largeur*longueur);}

    void Lis ();
    void Affiche ();


private :
    int longueur;
    int largeur;
};





    //getter
    /* Méthodes d'obtention
     DataType getAge() const {
        return age;
    }
    int getlongueur () const {return longueur;}
    int getlargeur () const {return largeur;}
    //setter
    Méthodes de définition
     void setAge(DataType newValue) {
        age = newValue;
    }
    void setlongueur (int newlongeur) {longueur=newlongueur;}
    void setlargeur (int newlargeur) {largeur=newlargeur;}
    */
