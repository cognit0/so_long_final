#include "so_long.h"

int move_up(t_game *game)
{
    int x;
    int y;

    x = game->player_x;
    y = game->player_y;
    if (game->map->map[y - 1][x] == '1')
        return (1);
    else if (game->map->map[y - 1][x] == 'C')
    {
        game->map->map[y - 1][x] = '0';
        game->coin--;
    }
    game->player_y--;
    return (0);
}

int move_down(t_game *game)
{
    int x;
    int y;

    x = game->player_x;
    y = game->player_y;
    if (game->map->map[y + 1][x] == '1')
        return (1);
    else if (game->map->map[y + 1][x] == 'C')
    {
        game->map->map[y + 1][x] = '0';
        game->coin--;
    }
    game->player_y++;
    return (0);
}

int move_left(t_game *game)
{
    int x;
    int y;

    x = game->player_x;
    y = game->player_y;
    if (game->map->map[y][x - 1] == '1')
        return (1);
    else if (game->map->map[y][x - 1] == 'C')
    {
        game->map->map[y][x - 1] = '0';
        game->coin--;
    }
    game->player_x--;
    return (0);
}

int move_right(t_game *game)
{
    int x;
    int y;

    x = game->player_x;
    y = game->player_y;
    if (game->map->map[y][x + 1] == '1')
        return (1);
    else if (game->map->map[y][x + 1] == 'C')
    {
        game->map->map[y][x + 1] = '0';
        game->coin--;
    }
    game->player_x++;
    return (0);
}