﻿// Copyright (c) Microsoft. All rights reserved. 
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 

extern alias WindowsRuntime;
using System;
using System.ComponentModel;
using Microsoft.Windows.Design;
using Microsoft.Windows.Design.Metadata;
using Microsoft.Xaml.Interactivity.Design.Properties;

namespace Microsoft.Xaml.Interactivity.Design
{
    internal class MetadataTableProvider : IProvideAttributeTable
    {
        private AttributeTableBuilder _attributeTableBuilder;

        public AttributeTable AttributeTable
        {
            get
            {
                if (_attributeTableBuilder == null)
                {
                    _attributeTableBuilder = new AttributeTableBuilder();
                }

                AddAttribute<ActionCollection>(new CategoryAttribute(Resources.Category_Name_Actions));
                AddAttribute<BehaviorCollection>(new ToolboxBrowsableAttribute(false));

                return _attributeTableBuilder.CreateTable();
            }
        }

        private void AddAttribute<T>(Attribute attribute)
        {
            _attributeTableBuilder.AddCustomAttributes(typeof(T), attribute);
        }
    }
}
