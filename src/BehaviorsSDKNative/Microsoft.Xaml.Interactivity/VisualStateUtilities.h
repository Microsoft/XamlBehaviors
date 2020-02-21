// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
#pragma once
#include "VisualStateUtilities.g.h"

namespace winrt::Microsoft::Xaml::Interactivity::implementation
{
/// <summary>
/// Provides various standard operations for working with <seealso cref="Windows::UI::Xaml::VisualStateManager"/>.
/// </summary>
struct VisualStateUtilities : VisualStateUtilitiesT<VisualStateUtilities>
{
    /// <summary>
    /// Find the nearest parent which contains visual states.
    /// </summary>
    /// <param name="element">The <see cref="Windows::UI::Xaml::FrameworkElement"/> from which to find the nearest stateful control.</param>
    /// <returns>The nearest <see cref="Windows::UI::Xaml::Controls::Control"/> that contains visual states; else null.</returns>
    /// <exception cref="Platform::InvalidArgumentException"><paramref name="element"/> is null.</exception>
    static Windows::UI::Xaml::Controls::Control FindNearestStatefulControl(Windows::UI::Xaml::FrameworkElement const &element);

    /// <summary>
    /// Transitions the control between two states.
    /// </summary>
    /// <param name="control">The <see cref="Windows::UI::Xaml::Controls::Control"/> to transition between states.</param>
    /// <param name="stateName">The state to transition to.</param>
    /// <param name="useTransitions">True to use a <see cref="Windows::UI::Xaml::VisualTransition"/> to transition between states; otherwise, false.</param>
    /// <returns>True if the <paramref name="control"/> is successfully transitioned to the new state; otherwise, false.</returns>
    /// <exception cref="Platform::InvalidArgumentException"><paramref name="control"/> or <paramref name="stateName"/> is null.</exception>
    static bool GoToState(Windows::UI::Xaml::Controls::Control const &control, hstring const &stateName, bool useTransitions);

    /// <summary>
    /// Gets the value of the VisualStateManager.VisualStateGroups attached property.
    /// </summary>
    /// <param name="element">The <see cref="Windows::UI::Xaml::FrameworkElement"/> from which to get the VisualStateManager.VisualStateGroups.</param>
    /// <returns>The list of VisualStateGroups in the given element.</returns>
    /// <exception cref="Platform::InvalidArgumentException"><paramref name="element"/> is null.</exception>
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const &element);

private:
    static bool HasVisualStateGroupsDefined(Windows::UI::Xaml::FrameworkElement const &element);
    static bool ShouldContinueTreeWalk(Windows::UI::Xaml::FrameworkElement const &element);
};
} // namespace winrt::Microsoft::Xaml::Interactivity::implementation
namespace winrt::Microsoft::Xaml::Interactivity::factory_implementation
{
struct VisualStateUtilities : VisualStateUtilitiesT<VisualStateUtilities, implementation::VisualStateUtilities>
{
};
} // namespace winrt::Microsoft::Xaml::Interactivity::factory_implementation
