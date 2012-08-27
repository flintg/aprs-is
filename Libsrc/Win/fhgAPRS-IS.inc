!Category(fhgAPRS-IS)
!-----------------------------------------------------------------------
! fhgAPRS-IS.inc - Include for the APRS-IS application
!-----------------------------------------------------------------------
  OMIT('_EndOfInclude', _fhgAPRSISPresent_)
_fhgAPRSISPresent_ EQUATE(1)
  INCLUDE('fhgEagleFlintSoftware.inc'), ONCE
!-----------------------------------
! Main application settings
!-----------------------------------
app:Version         EQUATE('1.00.000')          !! Version resource
app:Website         EQUATE('http://blog.eagleflint.com/category/amateur-radio/aprs-is/') !! Development thread
app:Author          EQUATE('Flint Gatrell, N<216>FHG') !! Application author
app:Copyright       EQUATE('<169> 2012 Flint Gatrell.<13,10>Portions copyrighted by Twenty Pines Resources, Inc., www.20pines.com') !! Copyright notice
app:License         EQUATE('This app is free for personal Amateur use.') !! License notice

!-----------------------------------
! Product options
!-----------------------------------

_EndOfInclude_