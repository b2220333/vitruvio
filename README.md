# Vitruvio - CityEngine Plugin for Unreal Engine 4

Vitruvio is an [Unreal Engine 4](https://www.unrealengine.com/) (UE4) plugin which enables the use of ArcGIS CityEngine shape grammar rules in UE4 for the generation of procedural buildings. With Vitruvio, game designers or artists do not have to leave UE4 to make use of CityEngine’s procedural modeling power. The buildings stay procedural all time and artists can change the height, style and appearance of buildings easily with a parametric interface. In addition, buildings can also be generated at runtime.

As input Vitruvio requires rule packages (RPK) which are authored in CityEngine. An RPK includes assets and a CGA rule file which encodes an architectural style. The download section below provides links to the several RPKs which can be used out-of-the-box in Vitruvio.

The latest release is available on the [Unreal Marketplace](https://www.unrealengine.com/marketplace/en-US/product/vitruvio-cityengine-plugin) (or in the [downloads section on GitHub](https://github.com/Esri/vitruvio/releases/tag/v1.0)). Examples can be downloaded from [Vitruvio Plugin page](https://esri.github.io/cityengine/vitruvio#examples). Please make sure to [install Vitruvio](doc/installation.md) before running the examples.

![City generated using Vitruvio](doc/img/vitruvio_paris.jpg)



## Documentation

* [Installation](doc/installation.md)
* [User Guide](doc/usage.md)
* [Development Setup](doc/setup.md)

External documentation:
* [CityEngine Tutorials](https://doc.arcgis.com/en/cityengine/latest/tutorials/introduction-to-the-cityengine-tutorials.htm)
* [CityEngine CGA Reference](https://doc.arcgis.com/en/cityengine/latest/cga/cityengine-cga-introduction.htm)
* [CityEngine Manual](https://doc.arcgis.com/en/cityengine/latest/help/cityengine-help-intro.htm)
* [CityEngine SDK API Reference](https://esri.github.io/cityengine-sdk/html/index.html)

## Requirements

* Windows 10
* [Unreal Engine 4.26](https://www.unrealengine.com/en-US/download)
* Visual Studio (for development only)

## Issues

Find a bug or want to request a new feature?  Please let us know by submitting an issue.

## Contributing

Esri welcomes contributions from anyone and everyone. Please see our [guidelines for contributing](https://github.com/esri/contributing).


## Licensing

Vitruvio is under the same license as the included [CityEngine SDK](https://github.com/Esri/esri-cityengine-sdk#licensing).

An exception is the Vitruvio source code (without CityEngine SDK, binaries, or object code), which is licensed under the Apache License, Version 2.0 (the “License”); you may not use this work except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0.
