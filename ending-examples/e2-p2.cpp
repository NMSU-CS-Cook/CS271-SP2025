
class Square
{
 public:
   Square(int llx, int lly, int urx, int ury);
   ~Square();
   int Overlaps(Square Other);
 private:
   int LowLeftX, LowLeftY;
   int UpRightX, UpRightY;
};

Square::Square(int llx, int lly, int urx, int ury)
{
   LowLeftX = llx;
   LowLeftY = lly;
   UpRightX = urx;
   UpRightY = ury;
}

Square::~Square()
{
}

//
// returns 1 if current square overlaps Other, 0 if not
//
int Square::Overlaps(Square Other);
{

