# Melange from scratch

![Melange from scratch](melange-from-scratch.png)

A step-by-step guide to configure a Melange project, starting from the [standard OCaml starter project](https://ocaml.org/docs/your-first-program) (`opam exec -- dune init proj hello`) and progressing through setup until you have a working React application compiled from Reason.

## Quick Start

```bash
make install  # Install dependencies
make dev      # Build and start dev server
```

Open http://localhost:8080 to see the React app!

## Melange configuration from scratch steps

### 1. Start with OCaml project ([commit](../../commit/56f7bf2))
```bash
opam exec -- dune init proj hello
```

### 2. Add .gitignore for OCaml ([commit](../../commit/82c8b5f))

### 3. Add Melange dependency ([commit](../../commit/f7df4b5))

### 4. Configure Melange compilation ([commit](../../commit/eb98b02))
- Enable Melange in `dune-project`
- Change from `executable` to `melange.emit`
- Generates JavaScript instead of native binary

### 5. Install Reason ([commit](../../commit/ae7576b))

### 6. Add Reason example file ([commit](../../commit/24bdd91))
Create `helloReason.re` with simple example

### 7. Install melange-webapi bindings ([commit](../../commit/b6e41a4))
Add DOM manipulation capabilities

### 8. DOM manipulation example ([commit](../../commit/c102b01))
Use melange-webapi to manipulate the DOM

### 9. Add esbuild bundler ([commit](../../commit/a54b34e))
Bundle JavaScript for browser with minification

### 10. Add development server ([commit](../../commit/070812a))
Install http-server and add `make dev` command

### 11. Add Day.js with bindings ([commit](../../commit/cc21888))
- Install Day.js npm package
- Create Reason bindings for Day.js
- Display formatted dates

### 12. Add Reason React ([commit](../../commit/5ae5c24))
- Install React and reason-react
- Create interactive counter component
- Full React app with hooks

