double appSqrt(double value) {
  if (value <= 0) {
    return 0;
  }

  double result = value;
  for (int i = 0; i < 10; ++i) {
    if (result <= 0) {
      result = 0.1;
    }

    double delta = value - (result * result);
    result = result + 0.5 * delta / result;
  }

  return result;
}