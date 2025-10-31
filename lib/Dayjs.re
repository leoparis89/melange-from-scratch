/* Bindings for Day.js library */

/* The dayjs object type */
type t;

/* Import dayjs and call it */
let make = (): t => [%mel.raw {| require("dayjs")() |}];

/* Format a dayjs object to string */
[@mel.send] external format: (t, string) => string = "format";

/* Add time to a dayjs object */
[@mel.send] external add: (t, int, string) => t = "add";

/* Subtract time from a dayjs object */
[@mel.send] external subtract: (t, int, string) => t = "subtract";

