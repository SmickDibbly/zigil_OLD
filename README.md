# Zigil
A thin abstraction layer on top of Linux or Windows, made specifically to separate out all the platform-specific code from the Electric Pentacle Machine. Nonetheless, Zigil can theoretically be used for other purposes too.

# What does the name mean?
- The "z" is for "zeddy", which is a name I frequently used on the internet until I changed to Smick Dibbly.
- The "i" and "g" are for "input" and "graphics", respectively, since Zigil was originally only meant to handle input and graphics.
- The "l" is for "library".

# Overview of features
- Creation and display of a main window.
- Input events in the form of a zgl_Event structure, modeled after the XEvent structure of X11.
- Pixel arrays in the form of a zgl_PixelArray structure.
- Basic 2D graphics primitives:
  - Blitting of pixel arrays.
  - Bresenham line-drawing and circle-drawing algorithm.
  - Various 2D line-clipping algorithms.
  - TODO: Polygon fill and clip algorithms.
- Miscellaneous OS wrappers:
  - Retrieve a directory listing.
