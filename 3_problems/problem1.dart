class Circle {
  num? radius;
}

class Rectangle {
  num? width;
  num? height;
}

String calculateArea(dynamic shape) {
  if (shape is Circle) {
    shape..radius = 5;
  } else if (shape is Rectangle) {
    shape
      ..width = 4
      ..height = 6;
  }

  return shape is Circle
      ? 'Area of circle: ${3.14 * shape.radius! * shape.radius!}'
      : shape is Rectangle
      ? 'Area of rectangle: ${shape.width! * shape.height!}'
      : 'Unknown shape';
}

void main() {
  print(calculateArea(Circle()));
  print(calculateArea(Rectangle()));
  print(calculateArea("Triangle"));
}
