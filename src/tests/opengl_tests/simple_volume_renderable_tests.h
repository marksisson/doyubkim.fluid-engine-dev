// Copyright (c) 2017 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#ifndef SRC_TESTS_OPENGL_TESTS_SIMPLE_VOLUME_RENDERABLE_TESTS_H_
#define SRC_TESTS_OPENGL_TESTS_SIMPLE_VOLUME_RENDERABLE_TESTS_H_

#include "opengl_tests.h"

namespace jet {

namespace viz {

class SimpleVolumeRenderableTests final : public OpenGLTests {
 public:
    SimpleVolumeRenderableTests() = default;

    void setup(GLFWWindow* window) override;
};

}  // namespace viz

}  // namespace jet

#endif  // SRC_TESTS_OPENGL_TESTS_SIMPLE_VOLUME_RENDERABLE_TESTS_H_
