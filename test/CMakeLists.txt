configure_file(lit.site.cfg.py.in lit.site.cfg.py @ONLY)

add_custom_target(check
  COMMAND ${CMAKE_SOURCE_DIR}/my-lit.py "${CMAKE_CURRENT_BINARY_DIR}" -v
  DEPENDS word-counter)
