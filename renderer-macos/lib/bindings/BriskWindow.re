open CocoaTypes;

[@noalloc]
external _NSWindow_makeWithContentRect:
  ([@unboxed] float, [@unboxed] float, [@unboxed] float, [@unboxed] float) =>
  window =
  "ml_NSWindow_makeWithContentRect_bc" "ml_NSWindow_makeWithContentRect";

[@noalloc]
external _NSWindow_isVisible: window => bool = "ml_NSWindow_isVisible";
[@noalloc] external _NSWindow_center: window => unit = "ml_NSWindow_center";
[@noalloc]
external _NSWindow_makeKeyAndOrderFront: window => unit =
  "ml_NSWindow_makeKeyAndOrderFront";
[@noalloc]
external _NSWindow_setTitle: (window, string) => unit = "ml_NSWindow_setTitle";
external _NSWindow_title: window => string = "ml_NSWindow_title";
[@noalloc]
external _NSWindow_contentView: window => view = "ml_NSWindow_contentView";
[@noalloc]
external _NSWindow_setContentView: (window, view) => unit =
  "ml_NSWindow_setContentView";
[@noalloc]
external _NSWindow_contentWidth: window => [@unboxed] float =
  "ml_NSWindow_contentWidth" "ml_NSWindow_contentWidth";
[@noalloc]
external _NSWindow_contentHeight: window => [@unboxed] float =
  "ml_NSWindow_contentHeight" "ml_NSWindow_contentHeight";
external setOnWindowDidResize: (window, unit => unit) => unit =
  "ml_NSWindow_setOnWindowDidResize";

class type t = {
  pub isVisible: bool;
  pub center: unit;
  pub makeKeyAndOrderFront: unit;
  pub setTitle: string => unit;
  pub title: string;
  pub contentView: view;
  pub setContentView: view => unit;
  pub contentWidth: unit => float;
  pub contentHeight: unit => float;
  pub windowDidResize: (unit => unit) => unit;
};

let makeWithContentRect = (x, y, w, h) => {
  let win = _NSWindow_makeWithContentRect(x, y, w, h);

  {
    as _;
    pub isVisible = _NSWindow_isVisible(win);
    pub center = _NSWindow_center(win);
    pub makeKeyAndOrderFront = _NSWindow_makeKeyAndOrderFront(win);
    pub setTitle = s => _NSWindow_setTitle(win, s);
    pub title = _NSWindow_title(win);
    pub contentView = _NSWindow_contentView(win);
    pub setContentView = v => _NSWindow_setContentView(win, v);
    pub contentWidth = _NSWindow_contentWidth(win);
    pub contentHeight = _NSWindow_contentHeight(win);
    pub windowDidResize = f => setOnWindowDidResize(win, f)
  };
};