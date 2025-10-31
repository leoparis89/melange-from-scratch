/* Simple Day.js example */

open Webapi.Dom;

module Dayjs = Hello_melange.Dayjs;

let () = {
  /* Get current date and format it */
  let now = Dayjs.make();
  let formatted = Dayjs.format(now, "MMMM DD, YYYY");
  
  /* Create a div and show the date */
  let div = Document.createElement("div", document);
  Element.setInnerHTML(div, "<h2>Today is: " ++ formatted ++ "</h2>");
  
  /* Append to body */
  switch (Document.asHtmlDocument(document)) {
  | Some(htmlDoc) =>
    switch (HtmlDocument.body(htmlDoc)) {
    | Some(body) =>
      Element.appendChild(div, body);
      Js.log("Date displayed!");
    | None => ()
    }
  | None => ()
  };
};

