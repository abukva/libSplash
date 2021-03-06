/**
 * Copyright 2013-2015 Felix Schmitt, Axel Huebl
 *
 * This file is part of libSplash.
 *
 * libSplash is free software: you can redistribute it and/or modify
 * it under the terms of of either the GNU General Public License or
 * the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libSplash is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License and the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * and the GNU Lesser General Public License along with libSplash.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SDC_DEFINES_H
#define SDC_DEFINES_H

namespace splash
{
#define SDC_GROUP_HEADER "/header"
#define SDC_GROUP_DATA "/data"
#define SDC_GROUP_ITERATION "iteration"
#define SDC_GROUP_CUSTOM "/"
#define SDC_ATTR_DIM_LOCAL "dim_local"
#define SDC_ATTR_DIM_GLOBAL "dim_global"
#define SDC_ATTR_MAX_ID "max_id"
#define SDC_ATTR_MPI_POSITION "mpi_position"
#define SDC_ATTR_MPI_SIZE "mpi_size"
#define SDC_ATTR_GRID_SIZE "grid_size"
#define SDC_ATTR_SIZE "client_size"
#define SDC_ATTR_COMPRESSION "compression"
#define SDC_ATTR_VERSION "splashVersion"
#define SDC_ATTR_FORMAT "splashFormat"
}

#endif /* SDC_DEFINES_H */
