.PHONY: help install build bundle serve clean watch test fmt

help: ## Show this help message
	@echo "Available targets:"
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2}'

install: ## Install opam and npm dependencies
	opam install . --deps-only --yes
	npm install

build: ## Build the project
	dune build

bundle: build ## Bundle JavaScript with esbuild to dist/bundle.js
	npx esbuild _build/default/bin/output/bin/helloReason.js --bundle --minify --outfile=dist/bundle.js

serve: bundle ## Bundle and start dev server at http://localhost:8080
	npx http-server -p 8080 -o

watch: ## Build the project in watch mode
	dune build --watch

clean: ## Clean build artifacts
	dune clean
	rm -rf dist

test: ## Run tests
	dune runtest

fmt: ## Format OCaml code
	dune build @fmt --auto-promote

dev: install build ## Install dependencies and build the project

