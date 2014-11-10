BUILD_TYPE ?= Debug

CMAKE_DIR = $(CURDIR)
BUILD_DIR ?= build


all:
	@echo "Usage:"
	@echo "\tmake debug"
	@echo "\tmake release"
	@echo "\tmake clean"
.PHONY: all


build:
	mkdir -p $(BUILD_DIR); cd $(BUILD_DIR); \
		cmake \
		-D CMAKE_BUILD_TYPE=$(BUILD_TYPE) \
		$(CMAKE_DIR); make
.PHONY: build


debug:
	BUILD_DIR=$(BUILD_DIR)/debug BUILD_TYPE=Debug $(MAKE) build
.PHONY: debug


release:
	BUILD_DIR=$(BUILD_DIR)/release BUILD_TYPE=Release $(MAKE) build
.PHONY: debug


clean:
	rm -rf $(BUILD_DIR)
.PHONY: clean
