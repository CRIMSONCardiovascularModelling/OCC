project(TKNIS)

if (WIN32)
  list( APPEND TKNIS_PRECOMPILED_DEFS "-D__NIS_DLL" )
  string( REGEX REPLACE ";" " " TKNIS_PRECOMPILED_DEFS "${TKNIS_PRECOMPILED_DEFS}")
endif()

  list( APPEND TKNIS_COMPILER_DIRECTORIES "${WOK_LIB_PATH}" )
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}/inc")
    list( APPEND TKNIS_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/inc" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/inc")
    list( APPEND TKNIS_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/inc" )
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
    IF(EXISTS "${BUILD_PATCH_DIR}/drv/NIS")
      list( APPEND TKNIS_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/drv/NIS" )
    ENDIF()
    IF(EXISTS "${BUILD_PATCH_DIR}/src/NIS")
      list( APPEND TKNIS_COMPILER_DIRECTORIES "${BUILD_PATCH_DIR}/src/NIS" )
    ENDIF()

  ENDIF()

  IF(EXISTS "${CMAKE_SOURCE_DIR}/drv/NIS")
    list( APPEND TKNIS_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/drv/NIS" )
  ENDIF()
  IF(EXISTS "${CMAKE_SOURCE_DIR}/src/NIS")
    list( APPEND TKNIS_COMPILER_DIRECTORIES "${CMAKE_SOURCE_DIR}/src/NIS" )
  ENDIF()

IF (WIN32)
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
  ENDIF()

ELSE()
  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "")
  ENDIF()

ENDIF()

  list( APPEND TKNIS_USED_LIBS TKBRep )
  list( APPEND TKNIS_USED_LIBS TKV3d )
  list( APPEND TKNIS_USED_LIBS TKMath )
  list( APPEND TKNIS_USED_LIBS TKernel )
  list( APPEND TKNIS_USED_LIBS TKService )
  list( APPEND TKNIS_USED_LIBS TKG2d )
  list( APPEND TKNIS_USED_LIBS TKG3d )
  list( APPEND TKNIS_USED_LIBS TKMesh )

if (WIN32)
  list( APPEND TKNIS_USED_LIBS opengl32.lib )
  list( APPEND TKNIS_USED_LIBS glu32.lib )
  list( APPEND TKNIS_USED_LIBS user32.lib )
  list( APPEND TKNIS_USED_LIBS gdi32.lib )
elseif(APPLE)
  find_library(FRAMEWORKS_OPENGL NAMES OpenGL)
  if(USE_GLX)
    list( APPEND TKNIS_USED_LIBS GL )
    list( APPEND TKNIS_USED_LIBS GLU )
  else()
    list( APPEND TKNIS_USED_LIBS ${FRAMEWORKS_OPENGL} )
  endif()
elseif(ANDROID)
  list( APPEND TKNIS_USED_LIBS EGL )
  list( APPEND TKNIS_USED_LIBS GLESv2 )
else()
  list( APPEND TKNIS_USED_LIBS GLU )
  list( APPEND TKNIS_USED_LIBS GL )
endif()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_Allocator.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Allocator.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Allocator.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Allocator.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Allocator.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Allocator.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_DrawList.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_DrawList.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_DrawList.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_DrawList.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_DrawList.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_DrawList.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_Drawer.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Drawer.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Drawer.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Drawer.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Drawer.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Drawer.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveContext.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveContext.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveContext.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveContext.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveContext.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveContext.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveObject.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveObject.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_InteractiveObject.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveObject.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveObject.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_InteractiveObject.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_ObjectsIterator.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_ObjectsIterator.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_ObjectsIterator.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_ObjectsIterator.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_ObjectsIterator.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_ObjectsIterator.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_SelectFilter.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_SelectFilter.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_SelectFilter.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SelectFilter.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SelectFilter.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SelectFilter.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_Surface.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Surface.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Surface.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Surface.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Surface.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Surface.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_SurfaceDrawer.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_SurfaceDrawer.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_SurfaceDrawer.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SurfaceDrawer.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SurfaceDrawer.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_SurfaceDrawer.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_Triangulated.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Triangulated.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_Triangulated.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Triangulated.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Triangulated.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_Triangulated.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_TriangulatedDrawer.cxx")
    ENDIF()
  ENDIF()

  IF(NOT "${BUILD_PATCH_DIR}" STREQUAL "" AND EXISTS "${BUILD_PATCH_DIR}//src/NIS/NIS_View.cxx")
    list( APPEND TKNIS_USED_SRCFILES "${BUILD_PATCH_DIR}//src/NIS/NIS_View.cxx" )
    SOURCE_GROUP (NIS FILES "${BUILD_PATCH_DIR}//src/NIS/NIS_View.cxx")
  ELSE()
    IF(EXISTS "${CMAKE_SOURCE_DIR}//src/NIS/NIS_View.cxx")
      list( APPEND TKNIS_USED_SRCFILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_View.cxx" )
      SOURCE_GROUP (NIS FILES "${CMAKE_SOURCE_DIR}//src/NIS/NIS_View.cxx")
    ENDIF()
  ENDIF()


IF (WIN32)
ELSE()

  IF (APPLE)

  ENDIF()

ENDIF()

if ("${USED_TOOLKITS}" STREQUAL "" OR DEFINED TurnONtheTKNIS)
 add_library( TKNIS SHARED ${TKNIS_USED_SRCFILES} )

 set_property(TARGET TKNIS PROPERTY FOLDER Visualization)

 install( TARGETS TKNIS
                                 RUNTIME DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/bin${BUILD_POSTFIX}"
                                 ARCHIVE DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/lib${BUILD_POSTFIX}"
                                 LIBRARY DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/lib${BUILD_POSTFIX}")

 if (MSVC)
  install( FILES  ${CMAKE_BINARY_DIR}/out/bind/Debug/TKNIS.pdb CONFIGURATIONS Debug
                                  DESTINATION "${INSTALL_DIR}/${OS_WITH_BIT}/${COMPILER}/bin${BUILD_POSTFIX}")
 endif()


 set_target_properties( TKNIS PROPERTIES COMPILE_FLAGS "${TKNIS_PRECOMPILED_DEFS}" )
 include_directories( ${TKNIS_COMPILER_DIRECTORIES} )
 target_link_libraries( TKNIS ${TKNIS_USED_LIBS} )
endif()
