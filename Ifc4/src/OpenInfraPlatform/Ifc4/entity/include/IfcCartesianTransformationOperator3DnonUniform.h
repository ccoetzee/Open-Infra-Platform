// Copied and modified code from "IfcPlusPlus" library.
// This library is available under the OpenSceneGraph Public License. Original copyright notice:

/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and / or modified under
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
* (at your option) any later version.The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* OpenSceneGraph Public License for more details.
*/

/* This file has been automatically generated using the TUM Open Infra Platform
Early Binding EXPRESS Generator. Any changes to this file my be lost in the future. */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "OpenInfraPlatform/Ifc4/model/shared_ptr.h"
#include "OpenInfraPlatform/Ifc4/model/Ifc4Object.h"
#include "IfcCartesianTransformationOperator3D.h"

namespace OpenInfraPlatform
{
	namespace Ifc4
	{
		//ENTITY
		class IfcCartesianTransformationOperator3DnonUniform : public IfcCartesianTransformationOperator3D
		{
		public:
			IfcCartesianTransformationOperator3DnonUniform();
			IfcCartesianTransformationOperator3DnonUniform( int id );
			~IfcCartesianTransformationOperator3DnonUniform();

			// method setEntity takes over all attributes from another instance of the class
			virtual void setEntity( shared_ptr<Ifc4Entity> other );
			virtual void getStepLine( std::stringstream& stream ) const;
			virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
			virtual void readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<Ifc4Entity> >& map );
			virtual void setInverseCounterparts( shared_ptr<Ifc4Entity> ptr_self );
			virtual void unlinkSelf();
			virtual const char* classname() const { return "IfcCartesianTransformationOperator3DnonUniform"; }


			// IfcRepresentationItem -----------------------------------------------------------
			// inverse attributes:
			//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
			//  std::vector<weak_ptr<IfcStyledItem> >		m_StyledByItem_inverse;

			// IfcGeometricRepresentationItem -----------------------------------------------------------

			// IfcCartesianTransformationOperator -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcDirection>						m_Axis1;					//optional
			//  shared_ptr<IfcDirection>						m_Axis2;					//optional
			//  shared_ptr<IfcCartesianPoint>				m_LocalOrigin;
			//  double										m_Scale;					//optional

			// IfcCartesianTransformationOperator3D -----------------------------------------------------------
			// attributes:
			//  shared_ptr<IfcDirection>						m_Axis3;					//optional

			// IfcCartesianTransformationOperator3DnonUniform -----------------------------------------------------------
			// attributes:
			double										m_Scale2;					//optional
			double										m_Scale3;					//optional
		};
	} // end namespace Ifc4
} // end namespace OpenInfraPlatform
