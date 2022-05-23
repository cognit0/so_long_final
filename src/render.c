#include "so_long.h"

void    render_player(t_game *game)
{
    int j;
    int i;
    char **map;

    map = game->map->map;
    i = game->player_y - 1;
    while (i < game->player_y + 2)
    {
        j = game->player_x - 1;
        while (j < game->player_x + 2)
            draw_sprites(game, j++, i);
        i++;
    }
    mlx_put_image_to_window(game->mlx, game->win, game->sprite->player,
    game->player_x * SCALE, game->player_y * SCALE);
}

int render(t_game *game)
{
    render_player(game);
    return (0);
}