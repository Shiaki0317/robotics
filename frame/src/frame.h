#include <Eigen/Dense>

using namespace Eigen;

class Frame {
 private:
  Matrix3d rot;
  Vector3d pos;

 public:
  Frame( Vector3d rot, Vector3d pos );
  Frame( Vector3d x, Vector3d y, Vector3d z, Vector3d pos );
  void update_wldframe( Frame prev );
  void update_orgframe(  );
}
