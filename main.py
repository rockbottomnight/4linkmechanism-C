import math


def deg_to_rad(angle_in_deg: float) -> float:
  return math.radians(angle_in_deg)

def position_vector(
  theta2: float,
  theta3: float,
  theta4: float,
  r1: int,
  r2: int,
  r3: int,
  r4: int
) -> (float, float):
  retval1 = (r2 * math.cos(deg_to_rad(theta2))) + (r3 * math.cos(deg_to_rad(theta3))) - (r4 * math.cos(deg_to_rad(theta4))) - r1
  retval2 = (r2 * math.sin(deg_to_rad(theta2))) + (r3 * math.sin(deg_to_rad(theta3))) - (r4 * math.sin(deg_to_rad(theta4)))
  return (retval1, retval2)

if __name__ == "__main__":
  print(position_vector(10, 20, 30, 5, 3, 2, 1))
