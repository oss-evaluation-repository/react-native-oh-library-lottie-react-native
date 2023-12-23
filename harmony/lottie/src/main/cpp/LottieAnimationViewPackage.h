/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * you may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LOTTIE_SRC_MAIN_CPP_LOTTIEANIMATIONVIEWPACKAGE_H
#define LOTTIE_SRC_MAIN_CPP_LOTTIEANIMATIONVIEWPACKAGE_H

#include "RNOH/Package.h"
#include "LottieAnimationViewEventRequestHandler.h"

namespace rnoh{

class LottieAnimationViewPackage : public Package {
public:
    explicit LottieAnimationViewPackage(Package::Context ctx) : Package(ctx){}

    std::vector<facebook::react::ComponentDescriptorProvider> createComponentDescriptorProviders() override;

    ComponentNapiBinderByString createComponentNapiBinderByName() override;

    ComponentJSIBinderByString createComponentJSIBinderByName() override;

    EventEmitRequestHandlers createEventEmitRequestHandlers() override
    {
        return {std::make_shared<LottieAnimationViewEventRequestHandler>()};
    }
};
} // namespace rnoh

#endif 