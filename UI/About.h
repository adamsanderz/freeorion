#ifndef _About_h_
#define _About_h_

#include <GG/GGFwd.h>
#include "CUIWnd.h"

//! This is a screen showing license and vision
class About : public CUIWnd {
public:
    //! \name Structors
    //!@{
    About();
    ~About();
    //!@}
    void CompleteConstruction() override;

    //! \name Mutators
    //!@{
    void KeyPress(GG::Key key, std::uint32_t key_code_point, GG::Flags<GG::ModKey> mod_keys) override;
    //!@}

    void ShowLicense();
    void ShowVision();

private:
    void DoLayout();

    std::shared_ptr<GG::Button>     m_done_btn;     //!< Done button
    std::shared_ptr<GG::Button>     m_license;      //!< License button
    std::shared_ptr<GG::Button>     m_vision;       //!< Vision button
    std::shared_ptr<GG::MultiEdit>  m_info;         //!< Displays the license or vision information
    std::string                     m_license_str;  //!< String containing the copyright license
};

#endif // _About_h_
