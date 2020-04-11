/**
 * This is a simple quadratic sovler.
 * 
 */
let quadraticSolver = (a, b, c) => {
  let discriminant = b *. b -. 4.0 *. a *. c;
  if (discriminant < 0.0) {
    None;
  } else {
    let x1 = (-. b +. Js.Math.sqrt(discriminant)) /. 2.0 *. a;
    let x2 = (-. b -. Js.Math.sqrt(discriminant)) /. 2.0 *. a;
    Some((x1, x2));
  };
};
