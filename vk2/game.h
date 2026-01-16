#ifndef GAME_H
#define GAME_H

class game
{
public:
    game(int); //konstruktori
    ~game(); //destruktori
    void play(); //toteutetaan peli
    void printGameResult(); //tulostaa oikean luvun ja arvausten määrän
private:
    int maxNumber = 20; //suurin arvattava luku
    int playerGuess; //arvaus
    int randomNumber = 0; //tallennetaan satunnaisluku
    int numOfGuesses =0; //laskee arvauksia
   // void printGameResult(); //tulostaa oikean luvun ja arvausten määrän
protected:

};

#endif // GAME_H
