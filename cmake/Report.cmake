message("=============BUILD CONFIG=============")
message("BUILD_Base\t\tON")
message("BUILD_BaseEngine\t\tON")
if(BUILD_QtExamples MATCHES ON)
    message("BUILD_QtExamples\t\tON")
    message("BUILD_QtVulkanWidget\t\tON")
else()
    message("BUILD_QtExamples\t\tOFF")
    message("BUILD_QtVulkanWidget\t\tOFF")
endif()
message("======================================")
message("Use cmake-gui .. to config.")
