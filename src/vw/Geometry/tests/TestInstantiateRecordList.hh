//template class  vw::geometry::Box<RealT, DimN>;
template class  vw::geometry::ShapeBase<ShapeT, RealT, DimN>;
template class  vw::geometry::Sphere<RealT, 0>;
//template class  vw::geometry::Sphere<RealT, DimN>;
template class  vw::geometry::SphereBase<SphereT, RealT, DimN>;
template struct vw::geometry::convex_promote::EpsilonBehavior<ValT, IntegralN>;
template struct vw::geometry::convex_promote::EpsilonBehavior<ValT, false>;
template struct vw::geometry::convex_promote::EpsilonFunctor<ValT>;
template struct vw::geometry::convex_promote::PromoteBehavior<ValT, IntegralN, SignedN>;
template struct vw::geometry::convex_promote::PromoteBehavior<ValT, false, false>;
template struct vw::geometry::convex_promote::PromoteBehavior<ValT, false, true>;
template struct vw::geometry::convex_promote::PromoteBehavior<ValT, true, false>;
template struct vw::geometry::convex_promote::PromoteFuncs<ValT>;
