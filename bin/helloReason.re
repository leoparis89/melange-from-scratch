/* Simple DOM manipulation with Melange bindings */

open Webapi.Dom;

let () = {
  Js.log("Hello from Reason!");
  
  /* Create a div element */
  let div = Document.createElement("div", document);
  Element.setInnerHTML(div, "<h1>Hello from Reason!</h1>");
  
  /* Get body and append */
  switch (Document.asHtmlDocument(document)) {
  | Some(htmlDoc) =>
    switch (HtmlDocument.body(htmlDoc)) {
    | Some(body) =>
      Element.appendChild(div, body);
      Js.log("Element appended!");
    | None => Js.log("No body found")
    }
  | None => Js.log("Not an HTML document")
  };
};

