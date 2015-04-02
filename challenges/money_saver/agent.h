#ifndef PERSON_H
#define PERSON_H

enum class Direction
{
  UP, DOWN, LEFT, RIGHT
};

enum class Terrain
{
  NONE, WALL, COIN, BANK, SAVER, THIEF, INVALID
};

class Game;

class Agent
{
public:
  virtual ~Agent() =0;
  virtual Direction walk(Terrain vision[], int vision_size) =0;

  int x() const { return x_; }
  int y() const { return y_; }
  int coins() const { return coins_; }
private:
  int x_, y_;
  int coins_;

  friend class Game;
};

#endif //PERSON_H