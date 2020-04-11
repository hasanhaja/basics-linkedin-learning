/**
 * This is one way to import or open up the module globally so the functions
 * inside of Belt.Array can be accessed openly.
 */
//open Belt.Array;
switch (Solver.quadraticSolver(1.0, -2.0, 1.0)) {
| Some((x1, x2)) =>
  Js.log(
    "x1 = " ++ Js.Float.toString(x1) ++ ", x2 = " ++ Js.Float.toString(x2),
  )
| None => Js.log("Could not solve")
};

let nums = [|23, 13, 0, 2, 45|];
switch (Belt.Array.get(nums, 0)) {
| Some(value) => Js.log(value)
| None => Js.log("No such element.")
};

/**
 * This scope allows for the opening of the module to be limited to just this scope.
 */
{
  open Belt.Array;

  let numsTimesTwo = map(nums, e => e * 2);
  Js.log(nums);
  Js.log(numsTimesTwo);
} /*map(nums, e => e*2*/;

// This won't work.
