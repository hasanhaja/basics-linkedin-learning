open Belt.Array;

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

let numsTimesTwo = map(nums, e => e * 2);
Js.log(nums);
Js.log(numsTimesTwo);
