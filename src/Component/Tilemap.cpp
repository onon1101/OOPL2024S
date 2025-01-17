#include "Component/Tilemap.hpp"

glm::vec2 Tilemap::GetTilePosition(int x, int y) {
    assert(x >= 0);
    assert(x < ROW_TILES_COUNT);
    assert(y >= 0);
    assert(y < COLUMN_TILES_COUNT);

    return {SCALE.x * (PIXEL_PER_TILE / 2.0) *
                (x * 2.0 - (ROW_TILES_COUNT - 1)),
            SCALE.y * (PIXEL_PER_TILE / 2.0) *
                (y * -2.0 + (COLUMN_TILES_COUNT - 1))};
}
