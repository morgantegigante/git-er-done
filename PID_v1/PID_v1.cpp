  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Arduino-PID-Library/PID_v1/PID_v1.cpp at master · br3ttb/Arduino-PID-Library</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="xhr-socket" href="/_sockets">
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="Z8ZjKvD3TSDBU8BivwNy6bipobNJhE0gccDyaCFLoMQ=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-3dae77b1344d5de8d1c932d28c3904033713ed8b.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-c15137b0b05c94db05fa047ecd589d7a7df41d85.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-c5555a5a962554bd1e804776ae4fd4f37380681f.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-3eee932f7d03a83e9ea5a0f591f5db485e1abc05.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="65ac304df8e204394f40f06a0ee35d0a">

        <link data-pjax-transient rel='permalink' href='/br3ttb/Arduino-PID-Library/blob/d21d7e3d09a8b1fc99775ca0ffd8d87fbc7f8dbc/PID_v1/PID_v1.cpp'>
    <meta property="og:title" content="Arduino-PID-Library"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/br3ttb/Arduino-PID-Library"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/a549e72ed66e1c1e512afcc0f8c14f51?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Contribute to Arduino-PID-Library development by creating an account on GitHub."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="br3ttb/Arduino-PID-Library"/>

    <meta name="description" content="Contribute to Arduino-PID-Library development by creating an account on GitHub." />

  <link href="https://github.com/br3ttb/Arduino-PID-Library/commits/master.atom" rel="alternate" title="Recent Commits to Arduino-PID-Library:master" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public env-production  ">
    <div id="wrapper">

      

      
      
      

      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-icon mega-icon-invertocat"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  ">
            <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="mini-icon mini-icon-advanced-search "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" data-username="kyleblankenbeckler" autocapitalize="off">

  <span class="mini-icon help tooltipped downwards" title="Show command bar help">
    <span class="mini-icon mini-icon-help"></span>
  </span>

  <input type="hidden" name="ref" value="cmdform">

    <input type="hidden" class="js-repository-name-with-owner" value="br3ttb/Arduino-PID-Library"/>
    <input type="hidden" class="js-repository-branch" value="master"/>
    <input type="hidden" class="js-repository-tree-sha" value="61cda480437fa3135f792ffe6c100ae7bfce1021"/>

  <div class="divider-vertical"></div>
</form>
        <ul class="top-nav">
            <li class="explore"><a href="https://github.com/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="http://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="https://github.com/kyleblankenbeckler" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/43ccda59144391a9647f5189d81188b8?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> kyleblankenbeckler
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="mini-icon mini-icon-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="mini-icon mini-icon-account-settings"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="mini-icon mini-icon-logout"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  <ul class="dropdown-menu">
    <li>
      <a href="/new"><span class="mini-icon mini-icon-create"></span> New repository</a>
    </li>
    <li>
        <a href="https://github.com/br3ttb/Arduino-PID-Library/issues/new"><span class="mini-icon mini-icon-issue-opened"></span> New issue</a>
    </li>
    <li>
    </li>
    <li>
      <a href="/organizations/new"><span class="mini-icon mini-icon-u-list"></span> New organization</a>
    </li>
  </ul>
</div>


    
  </div>
</div>

      

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              


<ul class="pagehead-actions">


    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="Z8ZjKvD3TSDBU8BivwNy6bipobNJhE0gccDyaCFLoMQ=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="2979604" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">
          <span class="mini-icon mini-icon-watching"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder js-menu-content">
        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item js-navigation-target selected">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-watching"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item js-navigation-target ">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item js-navigation-target ">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/br3ttb/Arduino-PID-Library/unstar" class="minibutton js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="mini-icon mini-icon-remove-star"></span>
        <span class="text">Unstar</span>
      </a>
      <a href="/br3ttb/Arduino-PID-Library/star" class="minibutton js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="mini-icon mini-icon-star"></span>
        <span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/br3ttb/Arduino-PID-Library/stargazers">93</a>
    </li>

        <li>
          <a href="/br3ttb/Arduino-PID-Library/fork" class="minibutton js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="nofollow" data-method="post">
            <span class="mini-icon mini-icon-branch-create"></span>
            <span class="text">Fork</span>
          </a>
          <a href="/br3ttb/Arduino-PID-Library/network" class="social-count">27</a>
        </li>


</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/br3ttb" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">br3ttb</span>
                  </a></span> /
                <strong><a href="/br3ttb/Arduino-PID-Library" class="js-current-repository">Arduino-PID-Library</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
      <li class="pulse-nav"><a href="/br3ttb/Arduino-PID-Library/pulse" highlight="pulse" rel="nofollow"><span class="mini-icon mini-icon-pulse"></span></a></li>
    <li><a href="/br3ttb/Arduino-PID-Library" class="selected" highlight="repo_source repo_downloads repo_commits repo_tags repo_branches">Code</a></li>
    <li><a href="/br3ttb/Arduino-PID-Library/network" highlight="repo_network">Network</a></li>
    <li><a href="/br3ttb/Arduino-PID-Library/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>1</span></a></li>

      <li><a href="/br3ttb/Arduino-PID-Library/issues" highlight="repo_issues">Issues <span class='counter'>2</span></a></li>

      <li><a href="/br3ttb/Arduino-PID-Library/wiki" highlight="repo_wiki">Wiki</a></li>


    <li><a href="/br3ttb/Arduino-PID-Library/graphs" highlight="repo_graphs repo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/br3ttb/Arduino-PID-Library/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="mini-icon mini-icon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item js-navigation-target selected">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/br3ttb/Arduino-PID-Library/blob/master/PID_v1/PID_v1.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/br3ttb/Arduino-PID-Library" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/br3ttb/Arduino-PID-Library/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/br3ttb/Arduino-PID-Library/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:3adf128233ab512f1f07884429e21c7d -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:3adf128233ab512f1f07884429e21c7d -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/br3ttb/Arduino-PID-Library" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">Arduino-PID-Library</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/br3ttb/Arduino-PID-Library/tree/master/PID_v1" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">PID_v1</span></a></span><span class="separator"> / </span><strong class="final-path">PID_v1.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="PID_v1/PID_v1.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
        </div>

      <a href="/br3ttb/Arduino-PID-Library/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/a549e72ed66e1c1e512afcc0f8c14f51?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/br3ttb" rel="author">br3ttb</a></span>
    <time class="js-relative-date" datetime="2012-10-04T17:47:12-07:00" title="2012-10-04 17:47:12">October 04, 2012</time>
    <div class="commit-title">
        <a href="/br3ttb/Arduino-PID-Library/commit/d4ce7050a58b80f619f7c58390c07e78961ffa0c" class="message">fixed issue</a> <a href="https://github.com/br3ttb/Arduino-PID-Library/issues/3" class="issue-link" title="PID::Compute could return a bool">#3</a> <a href="/br3ttb/Arduino-PID-Library/commit/d4ce7050a58b80f619f7c58390c07e78961ffa0c" class="message">and issue</a> <a href="https://github.com/br3ttb/Arduino-PID-Library/issues/4" class="issue-link" title='PID::PID() constructor dereferences uninitialized "myOutput" pointer'>#4</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/a549e72ed66e1c1e512afcc0f8c14f51?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/br3ttb">br3ttb</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/br3ttb/Arduino-PID-Library/blob/d21d7e3d09a8b1fc99775ca0ffd8d87fbc7f8dbc/PID_v1/PID_v1.cpp" data-title="Arduino-PID-Library/PID_v1/PID_v1.cpp at master · br3ttb/Arduino-PID-Library · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>196 lines (168 sloc)</span>
                <span>6.918 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton tooltipped leftwards"
                           title="Clicking this button will automatically fork this project so you can edit the file"
                           href="/br3ttb/Arduino-PID-Library/edit/master/PID_v1/PID_v1.cpp"
                           data-method="post" rel="nofollow">Edit</a>
                  <a href="/br3ttb/Arduino-PID-Library/raw/master/PID_v1/PID_v1.cpp" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/br3ttb/Arduino-PID-Library/blame/master/PID_v1/PID_v1.cpp" class="button minibutton ">Blame</a>
                  <a href="/br3ttb/Arduino-PID-Library/commits/master/PID_v1/PID_v1.cpp" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-blob">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/**********************************************************************************************</span></div><div class='line' id='LC2'><span class="cm"> * Arduino PID Library - Version 1.0.1</span></div><div class='line' id='LC3'><span class="cm"> * by Brett Beauregard &lt;br3ttb@gmail.com&gt; brettbeauregard.com</span></div><div class='line' id='LC4'><span class="cm"> *</span></div><div class='line' id='LC5'><span class="cm"> * This Library is licensed under a GPLv3 License</span></div><div class='line' id='LC6'><span class="cm"> **********************************************************************************************/</span></div><div class='line' id='LC7'><br/></div><div class='line' id='LC8'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC9'>&nbsp;&nbsp;<span class="err">#</span><span class="n">include</span> <span class="s">&quot;Arduino.h&quot;</span></div><div class='line' id='LC10'><span class="cp">#else</span></div><div class='line' id='LC11'>&nbsp;&nbsp;<span class="err">#</span><span class="n">include</span> <span class="s">&quot;WProgram.h&quot;</span></div><div class='line' id='LC12'><span class="cp">#endif</span></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'><span class="cp">#include &lt;PID_v1.h&gt;</span></div><div class='line' id='LC15'><br/></div><div class='line' id='LC16'><span class="cm">/*Constructor (...)*********************************************************</span></div><div class='line' id='LC17'><span class="cm"> *    The parameters specified here are those for for which we can&#39;t set up </span></div><div class='line' id='LC18'><span class="cm"> *    reliable defaults, so we need to have the user set them.</span></div><div class='line' id='LC19'><span class="cm"> ***************************************************************************/</span></div><div class='line' id='LC20'><span class="n">PID</span><span class="o">::</span><span class="n">PID</span><span class="p">(</span><span class="kt">double</span><span class="o">*</span> <span class="n">Input</span><span class="p">,</span> <span class="kt">double</span><span class="o">*</span> <span class="n">Output</span><span class="p">,</span> <span class="kt">double</span><span class="o">*</span> <span class="n">Setpoint</span><span class="p">,</span></div><div class='line' id='LC21'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">Kp</span><span class="p">,</span> <span class="kt">double</span> <span class="n">Ki</span><span class="p">,</span> <span class="kt">double</span> <span class="n">Kd</span><span class="p">,</span> <span class="kt">int</span> <span class="n">ControllerDirection</span><span class="p">)</span></div><div class='line' id='LC22'><span class="p">{</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">myOutput</span> <span class="o">=</span> <span class="n">Output</span><span class="p">;</span></div><div class='line' id='LC25'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">myInput</span> <span class="o">=</span> <span class="n">Input</span><span class="p">;</span></div><div class='line' id='LC26'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mySetpoint</span> <span class="o">=</span> <span class="n">Setpoint</span><span class="p">;</span></div><div class='line' id='LC27'>	<span class="n">inAuto</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'>	<span class="n">PID</span><span class="o">::</span><span class="n">SetOutputLimits</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">255</span><span class="p">);</span>				<span class="c1">//default output limit corresponds to </span></div><div class='line' id='LC30'>												<span class="c1">//the arduino pwm limits</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">SampleTime</span> <span class="o">=</span> <span class="mi">100</span><span class="p">;</span>							<span class="c1">//default Controller Sample Time is 0.1 seconds</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">PID</span><span class="o">::</span><span class="n">SetControllerDirection</span><span class="p">(</span><span class="n">ControllerDirection</span><span class="p">);</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">PID</span><span class="o">::</span><span class="n">SetTunings</span><span class="p">(</span><span class="n">Kp</span><span class="p">,</span> <span class="n">Ki</span><span class="p">,</span> <span class="n">Kd</span><span class="p">);</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">lastTime</span> <span class="o">=</span> <span class="n">millis</span><span class="p">()</span><span class="o">-</span><span class="n">SampleTime</span><span class="p">;</span>				</div><div class='line' id='LC38'><span class="p">}</span></div><div class='line' id='LC39'>&nbsp;</div><div class='line' id='LC40'>&nbsp;</div><div class='line' id='LC41'><span class="cm">/* Compute() **********************************************************************</span></div><div class='line' id='LC42'><span class="cm"> *     This, as they say, is where the magic happens.  this function should be called</span></div><div class='line' id='LC43'><span class="cm"> *   every time &quot;void loop()&quot; executes.  the function will decide for itself whether a new</span></div><div class='line' id='LC44'><span class="cm"> *   pid Output needs to be computed.  returns true when the output is computed,</span></div><div class='line' id='LC45'><span class="cm"> *   false when nothing has been done.</span></div><div class='line' id='LC46'><span class="cm"> **********************************************************************************/</span> </div><div class='line' id='LC47'><span class="kt">bool</span> <span class="n">PID</span><span class="o">::</span><span class="n">Compute</span><span class="p">()</span></div><div class='line' id='LC48'><span class="p">{</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">inAuto</span><span class="p">)</span> <span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">now</span> <span class="o">=</span> <span class="n">millis</span><span class="p">();</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">timeChange</span> <span class="o">=</span> <span class="p">(</span><span class="n">now</span> <span class="o">-</span> <span class="n">lastTime</span><span class="p">);</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">timeChange</span><span class="o">&gt;=</span><span class="n">SampleTime</span><span class="p">)</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*Compute all the working error variables*/</span></div><div class='line' id='LC55'>	  <span class="kt">double</span> <span class="n">input</span> <span class="o">=</span> <span class="o">*</span><span class="n">myInput</span><span class="p">;</span></div><div class='line' id='LC56'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">error</span> <span class="o">=</span> <span class="o">*</span><span class="n">mySetpoint</span> <span class="o">-</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC57'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ITerm</span><span class="o">+=</span> <span class="p">(</span><span class="n">ki</span> <span class="o">*</span> <span class="n">error</span><span class="p">);</span></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&gt;</span> <span class="n">outMax</span><span class="p">)</span> <span class="n">ITerm</span><span class="o">=</span> <span class="n">outMax</span><span class="p">;</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&lt;</span> <span class="n">outMin</span><span class="p">)</span> <span class="n">ITerm</span><span class="o">=</span> <span class="n">outMin</span><span class="p">;</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">dInput</span> <span class="o">=</span> <span class="p">(</span><span class="n">input</span> <span class="o">-</span> <span class="n">lastInput</span><span class="p">);</span></div><div class='line' id='LC61'>&nbsp;</div><div class='line' id='LC62'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*Compute PID Output*/</span></div><div class='line' id='LC63'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">output</span> <span class="o">=</span> <span class="n">kp</span> <span class="o">*</span> <span class="n">error</span> <span class="o">+</span> <span class="n">ITerm</span><span class="o">-</span> <span class="n">kd</span> <span class="o">*</span> <span class="n">dInput</span><span class="p">;</span></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC65'>	  <span class="k">if</span><span class="p">(</span><span class="n">output</span> <span class="o">&gt;</span> <span class="n">outMax</span><span class="p">)</span> <span class="n">output</span> <span class="o">=</span> <span class="n">outMax</span><span class="p">;</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">output</span> <span class="o">&lt;</span> <span class="n">outMin</span><span class="p">)</span> <span class="n">output</span> <span class="o">=</span> <span class="n">outMin</span><span class="p">;</span></div><div class='line' id='LC67'>	  <span class="o">*</span><span class="n">myOutput</span> <span class="o">=</span> <span class="n">output</span><span class="p">;</span></div><div class='line' id='LC68'><br/></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/*Remember some variables for next time*/</span></div><div class='line' id='LC70'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">lastInput</span> <span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">lastTime</span> <span class="o">=</span> <span class="n">now</span><span class="p">;</span></div><div class='line' id='LC72'>	  <span class="k">return</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC75'><span class="p">}</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><br/></div><div class='line' id='LC78'><span class="cm">/* SetTunings(...)*************************************************************</span></div><div class='line' id='LC79'><span class="cm"> * This function allows the controller&#39;s dynamic performance to be adjusted. </span></div><div class='line' id='LC80'><span class="cm"> * it&#39;s called automatically from the constructor, but tunings can also</span></div><div class='line' id='LC81'><span class="cm"> * be adjusted on the fly during normal operation</span></div><div class='line' id='LC82'><span class="cm"> ******************************************************************************/</span> </div><div class='line' id='LC83'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">SetTunings</span><span class="p">(</span><span class="kt">double</span> <span class="n">Kp</span><span class="p">,</span> <span class="kt">double</span> <span class="n">Ki</span><span class="p">,</span> <span class="kt">double</span> <span class="n">Kd</span><span class="p">)</span></div><div class='line' id='LC84'><span class="p">{</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">Kp</span><span class="o">&lt;</span><span class="mi">0</span> <span class="o">||</span> <span class="n">Ki</span><span class="o">&lt;</span><span class="mi">0</span> <span class="o">||</span> <span class="n">Kd</span><span class="o">&lt;</span><span class="mi">0</span><span class="p">)</span> <span class="k">return</span><span class="p">;</span></div><div class='line' id='LC86'>&nbsp;</div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;<span class="n">dispKp</span> <span class="o">=</span> <span class="n">Kp</span><span class="p">;</span> <span class="n">dispKi</span> <span class="o">=</span> <span class="n">Ki</span><span class="p">;</span> <span class="n">dispKd</span> <span class="o">=</span> <span class="n">Kd</span><span class="p">;</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">SampleTimeInSec</span> <span class="o">=</span> <span class="p">((</span><span class="kt">double</span><span class="p">)</span><span class="n">SampleTime</span><span class="p">)</span><span class="o">/</span><span class="mi">1000</span><span class="p">;</span>  </div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;<span class="n">kp</span> <span class="o">=</span> <span class="n">Kp</span><span class="p">;</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;<span class="n">ki</span> <span class="o">=</span> <span class="n">Ki</span> <span class="o">*</span> <span class="n">SampleTimeInSec</span><span class="p">;</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;<span class="n">kd</span> <span class="o">=</span> <span class="n">Kd</span> <span class="o">/</span> <span class="n">SampleTimeInSec</span><span class="p">;</span></div><div class='line' id='LC93'>&nbsp;</div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">controllerDirection</span> <span class="o">==</span><span class="n">REVERSE</span><span class="p">)</span></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">kp</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">kp</span><span class="p">);</span></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ki</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">ki</span><span class="p">);</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">kd</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">kd</span><span class="p">);</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC100'><span class="p">}</span></div><div class='line' id='LC101'>&nbsp;&nbsp;</div><div class='line' id='LC102'><span class="cm">/* SetSampleTime(...) *********************************************************</span></div><div class='line' id='LC103'><span class="cm"> * sets the period, in Milliseconds, at which the calculation is performed	</span></div><div class='line' id='LC104'><span class="cm"> ******************************************************************************/</span></div><div class='line' id='LC105'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">SetSampleTime</span><span class="p">(</span><span class="kt">int</span> <span class="n">NewSampleTime</span><span class="p">)</span></div><div class='line' id='LC106'><span class="p">{</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">NewSampleTime</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">ratio</span>  <span class="o">=</span> <span class="p">(</span><span class="kt">double</span><span class="p">)</span><span class="n">NewSampleTime</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">/</span> <span class="p">(</span><span class="kt">double</span><span class="p">)</span><span class="n">SampleTime</span><span class="p">;</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ki</span> <span class="o">*=</span> <span class="n">ratio</span><span class="p">;</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">kd</span> <span class="o">/=</span> <span class="n">ratio</span><span class="p">;</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">SampleTime</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span><span class="p">)</span><span class="n">NewSampleTime</span><span class="p">;</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC115'><span class="p">}</span></div><div class='line' id='LC116'>&nbsp;</div><div class='line' id='LC117'><span class="cm">/* SetOutputLimits(...)****************************************************</span></div><div class='line' id='LC118'><span class="cm"> *     This function will be used far more often than SetInputLimits.  while</span></div><div class='line' id='LC119'><span class="cm"> *  the input to the controller will generally be in the 0-1023 range (which is</span></div><div class='line' id='LC120'><span class="cm"> *  the default already,)  the output will be a little different.  maybe they&#39;ll</span></div><div class='line' id='LC121'><span class="cm"> *  be doing a time window and will need 0-8000 or something.  or maybe they&#39;ll</span></div><div class='line' id='LC122'><span class="cm"> *  want to clamp it from 0-125.  who knows.  at any rate, that can all be done</span></div><div class='line' id='LC123'><span class="cm"> *  here.</span></div><div class='line' id='LC124'><span class="cm"> **************************************************************************/</span></div><div class='line' id='LC125'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">SetOutputLimits</span><span class="p">(</span><span class="kt">double</span> <span class="n">Min</span><span class="p">,</span> <span class="kt">double</span> <span class="n">Max</span><span class="p">)</span></div><div class='line' id='LC126'><span class="p">{</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">Min</span> <span class="o">&gt;=</span> <span class="n">Max</span><span class="p">)</span> <span class="k">return</span><span class="p">;</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;<span class="n">outMin</span> <span class="o">=</span> <span class="n">Min</span><span class="p">;</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;<span class="n">outMax</span> <span class="o">=</span> <span class="n">Max</span><span class="p">;</span></div><div class='line' id='LC130'>&nbsp;</div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">inAuto</span><span class="p">)</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC133'>	   <span class="k">if</span><span class="p">(</span><span class="o">*</span><span class="n">myOutput</span> <span class="o">&gt;</span> <span class="n">outMax</span><span class="p">)</span> <span class="o">*</span><span class="n">myOutput</span> <span class="o">=</span> <span class="n">outMax</span><span class="p">;</span></div><div class='line' id='LC134'>	   <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="o">*</span><span class="n">myOutput</span> <span class="o">&lt;</span> <span class="n">outMin</span><span class="p">)</span> <span class="o">*</span><span class="n">myOutput</span> <span class="o">=</span> <span class="n">outMin</span><span class="p">;</span></div><div class='line' id='LC135'><br/></div><div class='line' id='LC136'>	   <span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&gt;</span> <span class="n">outMax</span><span class="p">)</span> <span class="n">ITerm</span><span class="o">=</span> <span class="n">outMax</span><span class="p">;</span></div><div class='line' id='LC137'>	   <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&lt;</span> <span class="n">outMin</span><span class="p">)</span> <span class="n">ITerm</span><span class="o">=</span> <span class="n">outMin</span><span class="p">;</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC139'><span class="p">}</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'><span class="cm">/* SetMode(...)****************************************************************</span></div><div class='line' id='LC142'><span class="cm"> * Allows the controller Mode to be set to manual (0) or Automatic (non-zero)</span></div><div class='line' id='LC143'><span class="cm"> * when the transition from manual to auto occurs, the controller is</span></div><div class='line' id='LC144'><span class="cm"> * automatically initialized</span></div><div class='line' id='LC145'><span class="cm"> ******************************************************************************/</span> </div><div class='line' id='LC146'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">SetMode</span><span class="p">(</span><span class="kt">int</span> <span class="n">Mode</span><span class="p">)</span></div><div class='line' id='LC147'><span class="p">{</span></div><div class='line' id='LC148'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">newAuto</span> <span class="o">=</span> <span class="p">(</span><span class="n">Mode</span> <span class="o">==</span> <span class="n">AUTOMATIC</span><span class="p">);</span></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">newAuto</span> <span class="o">==</span> <span class="o">!</span><span class="n">inAuto</span><span class="p">)</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span>  <span class="cm">/*we just went from manual to auto*/</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">PID</span><span class="o">::</span><span class="n">Initialize</span><span class="p">();</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">inAuto</span> <span class="o">=</span> <span class="n">newAuto</span><span class="p">;</span></div><div class='line' id='LC154'><span class="p">}</span></div><div class='line' id='LC155'>&nbsp;</div><div class='line' id='LC156'><span class="cm">/* Initialize()****************************************************************</span></div><div class='line' id='LC157'><span class="cm"> *	does all the things that need to happen to ensure a bumpless transfer</span></div><div class='line' id='LC158'><span class="cm"> *  from manual to automatic mode.</span></div><div class='line' id='LC159'><span class="cm"> ******************************************************************************/</span> </div><div class='line' id='LC160'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">Initialize</span><span class="p">()</span></div><div class='line' id='LC161'><span class="p">{</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;<span class="n">ITerm</span> <span class="o">=</span> <span class="o">*</span><span class="n">myOutput</span><span class="p">;</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;<span class="n">lastInput</span> <span class="o">=</span> <span class="o">*</span><span class="n">myInput</span><span class="p">;</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&gt;</span> <span class="n">outMax</span><span class="p">)</span> <span class="n">ITerm</span> <span class="o">=</span> <span class="n">outMax</span><span class="p">;</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">ITerm</span> <span class="o">&lt;</span> <span class="n">outMin</span><span class="p">)</span> <span class="n">ITerm</span> <span class="o">=</span> <span class="n">outMin</span><span class="p">;</span></div><div class='line' id='LC166'><span class="p">}</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'><span class="cm">/* SetControllerDirection(...)*************************************************</span></div><div class='line' id='LC169'><span class="cm"> * The PID will either be connected to a DIRECT acting process (+Output leads </span></div><div class='line' id='LC170'><span class="cm"> * to +Input) or a REVERSE acting process(+Output leads to -Input.)  we need to</span></div><div class='line' id='LC171'><span class="cm"> * know which one, because otherwise we may increase the output when we should</span></div><div class='line' id='LC172'><span class="cm"> * be decreasing.  This is called from the constructor.</span></div><div class='line' id='LC173'><span class="cm"> ******************************************************************************/</span></div><div class='line' id='LC174'><span class="kt">void</span> <span class="n">PID</span><span class="o">::</span><span class="n">SetControllerDirection</span><span class="p">(</span><span class="kt">int</span> <span class="n">Direction</span><span class="p">)</span></div><div class='line' id='LC175'><span class="p">{</span></div><div class='line' id='LC176'>&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">inAuto</span> <span class="o">&amp;&amp;</span> <span class="n">Direction</span> <span class="o">!=</span><span class="n">controllerDirection</span><span class="p">)</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC178'>	  <span class="n">kp</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">kp</span><span class="p">);</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">ki</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">ki</span><span class="p">);</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">kd</span> <span class="o">=</span> <span class="p">(</span><span class="mi">0</span> <span class="o">-</span> <span class="n">kd</span><span class="p">);</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;<span class="p">}</span>   </div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;<span class="n">controllerDirection</span> <span class="o">=</span> <span class="n">Direction</span><span class="p">;</span></div><div class='line' id='LC183'><span class="p">}</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'><span class="cm">/* Status Funcions*************************************************************</span></div><div class='line' id='LC186'><span class="cm"> * Just because you set the Kp=-1 doesn&#39;t mean it actually happened.  these</span></div><div class='line' id='LC187'><span class="cm"> * functions query the internal state of the PID.  they&#39;re here for display </span></div><div class='line' id='LC188'><span class="cm"> * purposes.  this are the functions the PID Front-end uses for example</span></div><div class='line' id='LC189'><span class="cm"> ******************************************************************************/</span></div><div class='line' id='LC190'><span class="kt">double</span> <span class="n">PID</span><span class="o">::</span><span class="n">GetKp</span><span class="p">(){</span> <span class="k">return</span>  <span class="n">dispKp</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC191'><span class="kt">double</span> <span class="n">PID</span><span class="o">::</span><span class="n">GetKi</span><span class="p">(){</span> <span class="k">return</span>  <span class="n">dispKi</span><span class="p">;}</span></div><div class='line' id='LC192'><span class="kt">double</span> <span class="n">PID</span><span class="o">::</span><span class="n">GetKd</span><span class="p">(){</span> <span class="k">return</span>  <span class="n">dispKd</span><span class="p">;}</span></div><div class='line' id='LC193'><span class="kt">int</span> <span class="n">PID</span><span class="o">::</span><span class="n">GetMode</span><span class="p">(){</span> <span class="k">return</span>  <span class="n">inAuto</span> <span class="o">?</span> <span class="n">AUTOMATIC</span> <span class="o">:</span> <span class="n">MANUAL</span><span class="p">;}</span></div><div class='line' id='LC194'><span class="kt">int</span> <span class="n">PID</span><span class="o">::</span><span class="n">GetDirection</span><span class="p">(){</span> <span class="k">return</span> <span class="n">controllerDirection</span><span class="p">;}</span></div><div class='line' id='LC195'><br/></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543527" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.06207s from fe2.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/br3ttb/Arduino-PID-Library/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.06256' data-host='fe2'></span>
    
  </body>
</html>

