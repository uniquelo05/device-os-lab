#!/bin/bash
# Script to run crypto module unit tests

set -e

# Build the tests
make test_crypto

# Run the tests
./build/test_crypto
