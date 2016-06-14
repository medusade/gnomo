///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2016 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 6/12/2016
///////////////////////////////////////////////////////////////////////
#ifndef _FENETRA_APP_WINDOWS_HELLO_MAIN_HPP
#define _FENETRA_APP_WINDOWS_HELLO_MAIN_HPP

#include "fenetra/windows/window_main.hpp"

namespace fenetra {
namespace app {
namespace windows {
namespace hello {

typedef fenetra::windows::window_main_implements main_implements;
typedef fenetra::windows::window_main main_extends;
///////////////////////////////////////////////////////////////////////
/// Class: maint
///////////////////////////////////////////////////////////////////////
template
<class TImplements = main_implements, class TExtends = main_extends>
class _EXPORT_CLASS maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    maint() {
    }
    virtual ~maint() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef maint<> main;

} // namespace hello 
} // namespace windows 
} // namespace app 
} // namespace fenetra 

#endif // _FENETRA_APP_WINDOWS_HELLO_MAIN_HPP 
