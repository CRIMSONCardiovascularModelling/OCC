cmake_minimum_required (VERSION 2.6)

project (Ocaf)

add_definitions (-DWINVER=0x0501 -DUNICODE -D_UNICODE)
set (CMAKE_MFC_FLAG 2)

set (Ocaf_SRC_DIR      ${MFC_STANDARD_SAMPLES_DIR}/06_Ocaf/src)
set (Ocaf_HEADER_FILES ${Ocaf_SRC_DIR}/NewBoxDlg.h
                       ${Ocaf_SRC_DIR}/NewCylDlg.h
                       ${Ocaf_SRC_DIR}/OcafApp.h
                       ${Ocaf_SRC_DIR}/OcafDoc.h
                       ${Ocaf_SRC_DIR}/OcafMainFrm.h
                       ${Ocaf_SRC_DIR}/Handle_TOcaf_Application.hxx
                       ${Ocaf_SRC_DIR}/TOcaf_Commands.hxx
                       ${Ocaf_SRC_DIR}/Handle_TOcafFunction_BoxDriver.hxx
                       ${Ocaf_SRC_DIR}/Handle_TOcafFunction_CutDriver.hxx
                       ${Ocaf_SRC_DIR}/Handle_TOcafFunction_CylDriver.hxx
                       ${Ocaf_SRC_DIR}/StdAfx.h )
set (Ocaf_SOURCE_FILES ${Ocaf_SRC_DIR}/NewBoxDlg.cpp
                       ${Ocaf_SRC_DIR}/NewCylDlg.cpp
                       ${Ocaf_SRC_DIR}/OcafApp.cpp
                       ${Ocaf_SRC_DIR}/OcafDoc.cpp
                       ${Ocaf_SRC_DIR}/OcafMainFrm.cpp
                       ${Ocaf_SRC_DIR}/TOcaf_Application.cxx
                       ${Ocaf_SRC_DIR}/TOcaf_Commands.cxx
                       ${Ocaf_SRC_DIR}/TOcafFunction_BoxDriver.cxx
                       ${Ocaf_SRC_DIR}/TOcafFunction_CutDriver.cxx
                       ${Ocaf_SRC_DIR}/TOcafFunction_CylDriver.cxx
                       ${Ocaf_SRC_DIR}/StdAfx.cpp )

set (Ocaf_RESOURCE_DIR    ${MFC_STANDARD_SAMPLES_DIR}/06_Ocaf/res)
set (Ocaf_RESOURCE_HEADER ${Ocaf_RESOURCE_DIR}/resource.h)
set (Ocaf_RESOURCE_FILES  ${Ocaf_RESOURCE_DIR}/ActionsTB.bmp
                          ${Ocaf_RESOURCE_DIR}/AIS_TB.bmp
                          ${Ocaf_RESOURCE_DIR}/Toolbar.bmp
                          ${Ocaf_RESOURCE_DIR}/UndoRedoTB.bmp
                          ${Ocaf_RESOURCE_DIR}/Ocaf.rc)

# groups in the VS solution
source_group ("Source Files" FILES ${Ocaf_SOURCE_FILES}
                                   ${COMMON_WINMAIN_FILE})

source_group ("Header Files" FILES ${Ocaf_HEADER_FILES}
                                   ${Ocaf_RESOURCE_HEADER})

source_group ("Resource Files" FILES ${Ocaf_RESOURCE_FILES})

add_executable (Ocaf WIN32 ${Ocaf_SOURCE_FILES}
                           ${Ocaf_HEADER_FILES}
                           ${COMMON_WINMAIN_FILE}
                           ${Ocaf_RESOURCE_HEADER}
                           ${Ocaf_RESOURCE_FILES} )


set_property (TARGET Ocaf PROPERTY FOLDER Samples)

install (TARGETS Ocaf RUNTIME DESTINATION "${INSTALL_DIR}/win${COMPILER_BITNESS}/${COMPILER}/bin${BUILD_POSTFIX}"
                      ARCHIVE DESTINATION "${INSTALL_DIR}/win${COMPILER_BITNESS}/${COMPILER}/lib${BUILD_POSTFIX}"
                      LIBRARY DESTINATION "${INSTALL_DIR}/win${COMPILER_BITNESS}/${COMPILER}/lib${BUILD_POSTFIX}")

include_directories (${OCCT_ROOT}/inc
                     ${MFC_STANDARD_SAMPLES_DIR}/06_Ocaf
                     ${Ocaf_SRC_DIR}
                     ${MFC_STANDARD_SAMPLES_DIR}/Common)

target_link_libraries (Ocaf mfcsample TKLCAF TKBO)