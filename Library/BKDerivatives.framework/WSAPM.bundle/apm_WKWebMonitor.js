var e,t;e=document.getElementsByTagName("head").item(0),(t=document.createElement("script")).type="text/javascript",t.innerHTML=!function(a){function u(e,t){if(e)for(var n=0;n<e.length&&(!e[n]||!t(e[n],n,e));n+=1);}function e(){return Date.now?Date.now():(new Date).valueOf()}function t(e,t,n,r){return e.addEventListener?e.addEventListener(t,n,r):e.attachEvent&&e.attachEvent("on"+t,n)}wkResouceMethod=function(e){void 0!==a.webkit&&"[object String]"==Object.prototype.toString.call(e)&&a.webkit.messageHandlers.wkAPMResouceMethodJsCallOC.postMessage(e)},wkResouce=function(e){void 0!==a.webkit&&"[object String]"==Object.prototype.toString.call(e)&&a.webkit.messageHandlers.wkAPMResouceJsCallOC.postMessage(e)},wkResouceError=function(e){void 0!==a.webkit&&"[object String]"==Object.prototype.toString.call(e)&&a.webkit.messageHandlers.wkAPMResouceJsErrorCallOC.postMessage(e)},wkJsErrorCallBack=function(e){void 0!==a.webkit&&"[object String]"==Object.prototype.toString.call(e)&&a.webkit.messageHandlers.wkAPMJsErrorJsCallOC.postMessage(e)},wkNotifyPageLoaded=function(e){void 0!==a.webkit&&"[object String]"==Object.prototype.toString.call(e)&&a.webkit.messageHandlers.wkAPMNotifyPageLoaded.postMessage(e)};var o,i,n,r,c,l={};function m(){var n,r=0;return STATE.firstPaint?r=STATE.firstPaint:c&&(n=c.timing,r=n.domLoading,c.getEntriesByName&&u(document.querySelectorAll("head>link, head>script"),function(e){var t;"LINK"==e.tagName?t=e.href:"SCRIPT"!=e.tagName||e.defer||e.async||(t=e.src),t&&((!(e=c.getEntriesByName(t))||e.length<=0)&&(e=[],(t=l[t])&&e.push(t)),1==e.length&&(e=e[0].responseEnd+n.navigationStart,r<e&&(r=e)))}),r-=n.navigationStart,STATE.firstPaint=Math.round(r)),STATE.firstPaint}function s(r){if(STATE.firstScreen)return STATE.firstScreen;STATE.firstPaint||m();var o,i,s=STATE.firstPaint;return document.createElement("img").getBoundingClientRect?(c&&c.getEntriesByName&&(o=a.innerHeight,i=[],u(document.querySelectorAll("img"),function(e){var t,n,r;t=e,r="none",a.getComputedStyle?r=(n=!(n=t.ownerDocument.defaultView)||!n.opener?a:n).getComputedStyle(t).display:t.currentStyle&&(r=t.currentStyle.display),(!r||"none"!=r)&&""!=e.src&&function(e){if(void 0!==e.getBoundingClientRect){var t=e.getBoundingClientRect(),e=e.pageYOffset;return t.top+(0!==e&&(e||document.scrollTop)||0)-(document.clientTop||0)}}(e)<o&&i.push(e.src)}),u(i,function(e){var t,n=c.getEntriesByName(e);n||(t=l[e])&&n.push(t),n.length&&(t=n[0].responseEnd,n[0].fetchStart<=r&&s<t&&(s=t))})),STATE.firstScreen=Math.round(s),STATE.firstScreen):s}function d(e,t,n){null!=t&&(n=(n=null==n||""==n?"GET":n).toLocaleUpperCase(),t.startsWith("http://")||t.startsWith("https://")||(t=t.startsWith("#")?document.URL+t:t.startsWith("//")?a.location.protocol+t:t.startsWith("/")?a.location.origin+t:document.URL.slice(0,document.URL.lastIndexOf("/")+1)+t),n={documentURL:document.URL,type:e,url:t,method:n},wkResouceMethod(JSON.stringify(n)))}function g(e){var t=c.getEntriesByType("resource"),n=[];t&&0!=t.length&&(u(t,function(e){n.push(function(e){var t,n={};for(t in e){var r="";try{r=typeof e[t]}catch(e){}"function"!=r&&(n[t]=e[t])}return n}(e))}),function(e){if(o)l=l&&null;else{l=l||{};for(var t=Object.keys(l).length,n=Math.min(100-t,e.length),r=0;r<n;r++)l[e[r].name]=e[r]}}(n),c.clearResourceTimings?c.clearResourceTimings():c.webkitClearResourceTimings&&c.webkitClearResourceTimings(),wkResouce(JSON.stringify(t))),e&&setTimeout(g,1e4,!0)}function f(){var e;o||c&&c.timing&&((e=$$iOS_Timing_JS$$).firstPaint=m(),e.firstScreen=s(e.loadEventEnd),e.curUrl=STATE.URL,wkNotifyPageLoaded(JSON.stringify(e)),o=!0)}a.ws_try_rum||(STATE=a.ws_try_rum={startTime:e()},i=XMLHttpRequest.prototype.open,XMLHttpRequest.prototype.open=function(e,t,n,r,o){setTimeout(d,0,"xhr",t,e),i.apply(this,arguments)},navigator.sendBeacon&&(n=Navigator.prototype.sendBeacon,Navigator.prototype.sendBeacon=function(e,t){return setTimeout(d,0,"beacon",e,"POST"),n.apply(this,arguments)}),a.fetch&&(r=a.fetch,a.fetch=function(e,t){return method="string"==typeof e?(url=e,!!t&&!!t.method&&t.method):(url=!!e&&!!e.url&&e.url,!!e&&!!e.method&&e.method),method=method||"GET",url&&setTimeout(d,0,"xhr",url,method),r.apply(this,arguments)}),""!=document.URL&&(document.URL,STATE.URL=document.URL,c=a.performance,setTimeout(g,1e4,!0),setTimeout(f,6e5),t(c,"resourcetimingbufferfull",function(){var e=c.getEntriesByType("resource");e&&(c.clearResourceTimings?c.clearResourceTimings():c.webkitClearResourceTimings&&c.webkitClearResourceTimings(),wkResouce(JSON.stringify(e)))},!1),t(c,"webkitresourcetimingbufferfull",function(){var e=c.getEntriesByType("resource");e&&(c.clearResourceTimings?c.clearResourceTimings():c.webkitClearResourceTimings&&c.webkitClearResourceTimings(),wkResouce(JSON.stringify(e)))},!1),"complete"===document.readyState&&(STATE.load_time=e(),setTimeout(f,0),setTimeout(g,0,!0)),a.addEventListener&&(t(a,"load",function(){STATE.load_time=e(),setTimeout(f,0),setTimeout(g,0,!0)},!1),t(a,"beforeunload",function(){setTimeout(f,0),setTimeout(g,0,!0)},!1),t(a,"pagehide",function(){setTimeout(f,0),setTimeout(g,0,!0)},!1),t(a,"unload",function(){setTimeout(f,0),setTimeout(g,0,!0)},!1),t(a,"error",function(e){var t=e.target;t!=a&&e instanceof Event&&(t={type:t.localName,url:t.src||t.href,msg:(t.src||t.href)+" is load error",time:(new Date).getTime()},wkResouceError(JSON.stringify(t)))},!0),a.onerror=function(e,t,n,r,o){const i={errorType:"jsFailed",type:"javascript",row:n,col:r,message:o&&o.stack?o.stack:e,url:t,time:(new Date).getTime()};void 0!==i.url&&""!=i.url||(i.url=document.URL),wkJsErrorCallBack(JSON.stringify(i))},t(document,"readystatechange",function(){var e;document.readyState,"interactive"===document.readyState&&((e=document.forms).length,e&&0<e.length&&u(e,function(t){t.wangsuApmOnSubmit=t.onsubmit,t.onsubmit=function(){var e=null==t.wangsuApmOnSubmit||t.wangsuApmOnSubmit();return null!=e&&!e||setTimeout(d,0,"form",t.action,t.method),e}}))},!1))))}(window),e&&e.appendChild(t);