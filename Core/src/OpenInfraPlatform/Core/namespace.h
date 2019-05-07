/*
    Copyright (c) 2018 Technical University of Munich
    Chair of Computational Modeling and Simulation.

    TUM Open Infra Platform is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License Version 3
    as published by the Free Software Foundation.

    TUM Open Infra Platform is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#ifndef OpenInfraPlatform_Core_namespace_750d8e9c_eaa8_4f6f_bd93_7c7cd6a2f3ab_h
#define OpenInfraPlatform_Core_namespace_750d8e9c_eaa8_4f6f_bd93_7c7cd6a2f3ab_h
#if !defined OIP_NAMESPACE_OPENINFRAPLATFORM_CORE_BEGIN
#define OIP_NAMESPACE_OPENINFRAPLATFORM_CORE_BEGIN \
namespace OpenInfraPlatform { \
namespace Core {
#endif
#if !defined OIP_NAMESPACE_OPENINFRAPLATFORM_CORE_END
#define OIP_NAMESPACE_OPENINFRAPLATFORM_CORE_END \
}\
}
#endif
#if !defined EMBED_INTO_OIP_NAMESPACE
#define EMBED_INTO_OIP_NAMESPACE(X) \
namespace oip { \
using OpenInfraPlatform::Core::X; \
}
#endif
#endif // end define OpenInfraPlatform_Core_namespace_750d8e9c_eaa8_4f6f_bd93_7c7cd6a2f3ab_h
