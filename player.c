#include "player.h"
#include <stdlib.h>

PlayerList* create_player_list() {
    PlayerList* list = malloc(sizeof(PlayerList));
    list->players = malloc(10 * sizeof(Player)); // Start with capacity 10
    list->count = 0;
    list->capacity = 10;
    return list;
}

void free_player_list(PlayerList* list) {
    free(list->players);
    free(list);
}