## Build Status
![](https://ci.appveyor.com/api/projects/status/897ervx359xqa7vh/branch/master?svg=true)

## Getting Started

### Resources

 - [Documentation](https://github.com/Microsoft/XamlBehaviors/wiki)
 - [Samples](/samples)
 - [Changelog](https://github.com/Microsoft/XamlBehaviors/wiki/Changelog)
 - [Source Code](https://github.com/Microsoft/XamlBehaviors)
 - [![Join the chat at https://gitter.im/Microsoft/XamlBehaviors](https://badges.gitter.im/Microsoft/XamlBehaviors.svg)](https://gitter.im/Microsoft/XamlBehaviors?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

### More Info

 - [Report a bug or ask a question](https://github.com/Microsoft/XamlBehaviors/issues)
 - [Contribute](https://github.com/Microsoft/XamlBehaviors/wiki/Contribute-to-XAML-Behaviors)
 - [License](http://opensource.org/licenses/MIT)

## Code Example

For an example of using Behaviors in an application, here is a snippet of XAML:
```xml
<Button>
	<Interactivity:Interaction.Behaviors>
		<Core:EventTriggerBehavior EventName="Click">
			<Core:ChangePropertyAction PropertyName="Background">
				<Core:ChangePropertyAction.Value>
					<SolidColorBrush Color="Red"/>
				</Core:ChangePropertyAction.Value>
			</Core:ChangePropertyAction>
		</Core:EventTriggerBehavior>
	</Interactivity:Interaction.Behaviors>
</Button>
```
## Using Behaviors SDK

The [documentation](https://github.com/Microsoft/XamlBehaviors/wiki) explains how to install Visual Studio, add the XAML Behaviors NuGet package to your project, and get started using the API.

## Building Behaviors from Source

**What You Need**

 - [Visual Studio 2015 Update 1 w/ Universal Windows Tools](https://www.visualstudio.com/features/windows-apps-games-vs)
 - [Multilingual App Toolkit](https://developer.microsoft.com/en-us/windows/develop/multilingual-app-toolkit)

**Clone the Repository**

 - Go to 'View' -> 'Team Explorer' -> 'Local Git Repositories' -> 'Clone'
 - Add the XAML Behaviors repository URL (https://github.com/Microsoft/XamlBehaviors) and hit 'Clone'

**Build and Create Managed XAML Behaviors NuGet**
 
 - Open the "BehaviorsSDKManaged.sln" solution in Visual Studio
 - Change Build Configuration to Release
 - Build [Ctrl + B]
 - Install the latest NuGet command-line tool by running **scripts/download-nuget.cmd**
 - Run **scripts/CreateManagedNuGet.cmd** 
   - *(Optional)* Provide a version number to the command line to override the default version 	
 
**Build and Create Native XAML Behaviors NuGet**
 
 - Open the "BehaviorsSDKNative.sln" solution in Visual Studio
 - [Batch Build](https://msdn.microsoft.com/en-us/library/169az28z(v=vs.90).aspx) for x86, x64, and ARM in Release
 - Install the latest NuGet command-line tool by running **scripts/download-nuget.cmd**
 - Run **scripts/CreateNativeNuGet.cmd** 
  - *(Optional)* Provide a version number to the command line to override the default version
