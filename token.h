#ifndef TOKEN_H
#define TOKEN_H


class Token
{
public:
    Token();
    Token(int player);
    Token(int player, int pos);
    void setPos(int pos);
    int getPosition();
    int getPlayer();
    bool getSelected();
    void setSelected(bool status);
private:
    int player;
    int pos;
    bool status; //true if free and false if busy

};

#endif // TOKEN_H

