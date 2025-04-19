#include <stdio.h>
#include "player.h"

int main() {
    printf("Soccer Stats Processor\n");
    
    PlayerList* players = create_player_list();
    
    // TODO: Add actual functionality
    
    free_player_list(players);
    return 0;
}