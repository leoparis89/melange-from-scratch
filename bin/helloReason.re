/* Simple DOM manipulation with Melange bindings */

open Webapi.Dom;

module Dayjs = Hello_melange.Dayjs;

let () = {
  /* Create a div element */
  let div = Document.createElement("div", document);
  Element.setInnerHTML(div, "<h1>Hello from Reason!</h1>");
  
  /* Add Day.js example */
  let now = Dayjs.make();
  let formatted = Dayjs.format(now, "MMMM DD, YYYY");
  let dateDiv = Document.createElement("div", document);
  Element.setInnerHTML(dateDiv, "<p>Today is: <strong>" ++ formatted ++ "</strong></p>");
  
  /* Get body and append */
  switch (Document.asHtmlDocument(document)) {
  | Some(htmlDoc) =>
    switch (HtmlDocument.body(htmlDoc)) {
    | Some(body) =>
      Element.appendChild(div, body);
      Element.appendChild(dateDiv, body);
    | None => ()
    }
  | None => ()
  };
};

