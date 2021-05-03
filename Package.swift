// swift-tools-version:5.3

import PackageDescription

let package = Package(
  name: "CGM-Core",
  products: [
    .library(
      name: "CGM-Core",
      targets: ["CGM-Core"]),
  ],
  dependencies: [],
  targets: [
    .target(
      name: "CGM-Core",
      dependencies: ["cgm_shared_module"]),
    .binaryTarget(
      name: "cgm_shared_module",
      path: "./Sources/CGM-Core/cgm_shared_module.xcframework"),
  ]
)
