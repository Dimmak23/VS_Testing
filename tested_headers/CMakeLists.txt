project(tested_headers)

set(tested_headers_sources
	Matrix2.h
	Matrix2.cpp
	Vector2.h
	Vector2.cpp
	VectorUtils.h
)

add_library(${PROJECT_NAME}
	${tested_headers_sources}
)