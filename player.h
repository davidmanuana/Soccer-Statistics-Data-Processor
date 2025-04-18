// player.h
#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char name[50];
    char team[50];
    int goals;
    int assists;
} Player;

typedef struct {
    Player* players;
    int count;
    int capacity;
} PlayerList;

PlayerList* create_player_list();
void free_player_list(PlayerList* list);

#endif