# Utils [![npm (scoped)](https://img.shields.io/npm/v/@smallstoneapps/utils.svg?maxAge=2592000&style=flat-square)](https://www.npmjs.com/package/@smallstoneapps/utils)&nbsp;[![MIT License](http://img.shields.io/badge/license-MIT-lightgray.svg?style=flat-square)](./LICENSE)

This is a small collection of [C macros][1] that make developing Pebble apps a little simpler.

## Installation

*You must be using Pebble SDK 3.12 or newer to use this library.*

To install the package to your app, use the pebble tool:

```
pebble package install @smallstoneapps/utils
```

## Usage

Include the header file in your source code.

```c
#include <@smallstoneapps/utils/macros.h>
```

## Documentation

### Logging

Shorthand wrappers for using APP_LOG with the various levels of logs.

```c
// Create a new DEBUG log message. Similar functions exist for INFO, WARN and ERROR.
DEBUG("Here is a logging message of value %d", 5);
```

### Layer Helpers

There are a number of macros for creating layers, and the various subtypes of layers.
Below are some examples, check out the source code for the full list.

```c
// Creates a new layer that is the size of the window, and adds it to the window.
// Similarly named functions exist for all layer types.
Layer* layer = layer_create_fullscreen(window);
layer_add_to_window(layer, window);
```

```c
// The menu layer version of this function also handles assigning the click handlers.
menu_layer_add_to_window(menu, window);
```

```c
// Prevent crashes caused by attempting to destroy an already destroyed layer,
// the `*_destroy_safe()` functions wrap destroy in a NULL check.
layer_destroy_safe(layer);
```

```c
// Show a hidden layer.
layer_show(layer);
// Hide a layer.
layer_hide(layer);
```


### Persistent Helpers

Check that a persistent key exists before reading it, and returning a default value if it doesn't.

```c
// If KEY_NUMBER exists, return the value stored there, otherwise return -1
int number = persist_read_int_safe(KEY_NUMBER, -1);
```

### Miscellaneous

```c
// Checks that data is not NULL before attempting to free.
free_safe(data);
```

```c
// Checks that the app timer exists before attempting to cancel.
app_timer_cancel_safe(timer);
```

```c
// Opens the app message with the maximum inbox and outbox size.
app_message_open_max();
```

[1]: http://gcc.gnu.org/onlinedocs/cpp/Macros.html
